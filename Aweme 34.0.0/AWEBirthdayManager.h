@interface AWEBirthdayManager : NSObject
+ (id)changeEffect:effectId:editService:;
+ (id)fetchEffect:;
+ (id)setMV:publishViewModel:;
+ (id)p_downloadThenEditEffect:forUser:effect:effectID:;
+ (id)transformToAccUser:;
+ (id)transformToAccTemplate:;
+ (id)fetchImageforUser:;
+ (void)copyMusic:;
+ (id)downloadThenEditEffect:enterFrom:;
+ (id)downloadThenEditIMBirthdayEffect:currentEffect:forUser:imModel:;
@end
