@interface IESECLiveRouter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canOpenSchema:;
- (BOOL)openSchema:;
- (BOOL)openSchema:fromViewController:;
+ (BOOL)canOpenSchema:;
+ (BOOL)openSchema:;
+ (BOOL)openSchema:fromViewController:;
@end
