@interface AWEAccessibilityCustomActionsManager : NSObject
@property (nonatomic) NSArray customActions;
@property (nonatomic) NSMutableArray subViewsAndFrame;
@property (nonatomic) BOOL hasShowAlert;
@property (nonatomic) BOOL forceCheck;
@property (nonatomic) BOOL useCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSubViewsAndFrame:;
- (id)fetchSubviewsConformsToItemProtocol:;
- (void)logWarningMessage:;
- (void)setHasShowAlert:;
- (void)setupAccessibilityCustomActions:;
- (id)subViewsAndFrame;
- (id)fetchAccessibilityCustomActions:;
- (BOOL)forceCheck;
- (void)setForceCheck:;
- (BOOL)hasShowAlert;
- (void).cxx_destruct;
- (void)setUseCache:;
- (BOOL)useCache;
- (id)customActions;
- (void)setCustomActions:;
@end
