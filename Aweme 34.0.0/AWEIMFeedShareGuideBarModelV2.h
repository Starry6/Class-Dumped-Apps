@interface AWEIMFeedShareGuideBarModelV2 : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) NSArray allowTypes;
@property (nonatomic) NSArray diggTypes;
@property (nonatomic) NSArray freqSwitches;
@property (nonatomic) q freqTime;
@property (nonatomic) NSArray persistTypes;
@property (nonatomic) NSArray playOverTypes;
@property (nonatomic) NSArray playXsTypes;
- (id)allowTypes;
- (void)setAllowTypes:;
- (id)diggTypes;
- (void)setDiggTypes:;
- (id)freqSwitches;
- (void)setFreqSwitches:;
- (long long)freqTime;
- (void)setFreqTime:;
- (id)persistTypes;
- (void)setPersistTypes:;
- (id)playOverTypes;
- (void)setPlayOverTypes:;
- (id)playXsTypes;
- (void)setPlayXsTypes:;
- (BOOL)enable;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (void)setEnable:;
@end
