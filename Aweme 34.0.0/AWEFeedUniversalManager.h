@interface AWEFeedUniversalManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)pointIsInsideWithLeftHand:viewBounds:;
+ (BOOL)enableLeftHandExpendHotZoneWithIconName:;
+ (BOOL)currentEnableLeftHandExpand;
+ (long long)leftHandExpendHotZoneArea;
+ (id)leftHnadExpendHotZoneIcon;
@end
