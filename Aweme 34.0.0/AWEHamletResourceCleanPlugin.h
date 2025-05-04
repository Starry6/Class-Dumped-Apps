@interface AWEHamletResourceCleanPlugin : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:;
- (double)cleanSizeWithStrategy:;
@end
