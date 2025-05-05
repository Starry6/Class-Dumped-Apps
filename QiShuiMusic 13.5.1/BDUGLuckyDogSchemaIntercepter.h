@interface BDUGLuckyDogSchemaIntercepter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandleUrl:;
- (id)handleUrl:;
- (BOOL)isMustBeAwakened;
+ (long long)intercepterType;
+ (id)sharedInstance;
@end
