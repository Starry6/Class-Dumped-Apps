@interface MLWritableWrappedModel : MLWrappedModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)writeToURL:error:;
+ (id)wrapperAroundWritableModel:;
@end
