@interface AWEPOIBTMValidPageFinderCheckNode : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)checkNodeWithEvent:params:checkType:extra:completion:;
- (BOOL)isValidBtmAB:configBtmList:realBtm:;
- (BOOL)checkListContainWithConfigBtmList:realBtm:;
@end
