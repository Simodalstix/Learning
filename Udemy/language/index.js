import {franc, francAll} from 'franc'
import langs from 'langs'
const input = process.argv[2];
const langCode = franc(input);
if (langCode === 'und'){
    console.log('couldn\'t find a match')
} else {let language = langs.where(3, langCode);
console.log(language.name)
}
// console.log(franc('এটি একটি ভাষা একক IBM স্ক্রিপ্ট'))
