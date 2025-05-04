@interface AWEPOIBTMValidUnCheckEventSkip : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)judgeIsSkipCheckWithEvent:params:;
- (BOOL)rejectByFilterWithConfig:params:;
@end
