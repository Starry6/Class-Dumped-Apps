@interface AWETransformerResourceManager : NSObject
- (id)resourcePathWithName:;
- (BOOL)transformerGeckoExist;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
