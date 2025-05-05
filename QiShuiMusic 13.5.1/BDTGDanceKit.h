@interface BDTGDanceKit : NSObject
+ (id)stringValueForKey:inDictionary:;
+ (id)arrayValueForKey:inDictionary:;
+ (void)attachObject:toObject:withKey:;
+ (id)base64DecodedFromString:;
+ (id)base64EncodedFromString:;
+ (id)dictionaryValueForKey:inDictionary:;
+ (id)getAttachedObjectFromObject:withKey:;
+ (id)hexDecodedFromString:;
+ (id)hexEncodedFromData:;
+ (id)jsonDecodedFromString:;
+ (id)jsonEncodedFromDictionary:;
+ (id)maskString:;
+ (id)queryItemValueForKey:inURL:;
@end
