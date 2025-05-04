@interface AWESearchPassParamsManager : NSObject
@property (nonatomic) NSMutableDictionary passOnceParamsMap;
@property (nonatomic) NSMutableDictionary passWithFilterParamsMap;
@property (nonatomic) NSMutableDictionary passAllTimeParamsMap;
- (void)updateWithRawData:isGroupBuySelf:;
- (id)passOnceParamsMap;
- (id)passWithFilterParamsMap;
- (id)passAllTimeParamsMap;
- (id)getOnceParamsWithTabKey:;
- (id)getPassWithFilterParamsWithTabKey:;
- (id)getPassAllTimeParamsWithTabKey:;
- (void)removeOnceParamsWithTabKey:;
- (void)removePassWithFilterParamsWithTabKey:;
- (void)removePassAllTimeParamsWithTabKey:;
- (void)setPassOnceParamsMap:;
- (void)setPassWithFilterParamsMap:;
- (void)setPassAllTimeParamsMap:;
- (id)init;
- (void).cxx_destruct;
@end
