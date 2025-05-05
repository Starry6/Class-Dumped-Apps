@interface TTVideoEnginePortraitEngine : NSObject
@property (nonatomic) NSMutableDictionary labelMap;
- (id)getEventData:;
- (id)getLabel:;
- (void)setLabel:withKey:;
- (void)setLabelMap:;
- (id)init;
- (void).cxx_destruct;
- (id)labelMap;
+ (id)instance;
@end
