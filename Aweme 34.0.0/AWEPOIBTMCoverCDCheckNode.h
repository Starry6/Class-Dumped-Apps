@interface AWEPOIBTMCoverCDCheckNode : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)checkNodeWithEvent:params:checkType:extra:completion:;
- (BOOL)isValidRouteCD:;
@end
