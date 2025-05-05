@interface FPUserInfo : NSObject
@property (nonatomic) NSArray keys;
@property (nonatomic) NSArray values;
@property (nonatomic) NSDictionary userInfo;
- (id)keys;
- (id)userInfo;
- (id)values;
- (id)initWithKeys:values:;
- (id)initWithUserInfo:;
- (void).cxx_destruct;
+ (id)zipWithArray1:array2:;
+ (id)unzipKeysWithZippedArray:;
+ (id)unzipValuesWithZippedArray:;
+ (id)mergeWithUserInfo:intoParentUserInfo:;
@end
