@interface AWEHPChannelCommonStage : NSObject
@property (nonatomic) BOOL isLanding;
@property (nonatomic) BOOL isChannelEnter;
@property (nonatomic) NSString skylightType;
- (void)setIsLanding:;
- (BOOL)isLanding;
- (BOOL)isChannelEnter;
- (id)skylightType;
- (void)setIsChannelEnter:;
- (void)setSkylightType:;
- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;
@end
