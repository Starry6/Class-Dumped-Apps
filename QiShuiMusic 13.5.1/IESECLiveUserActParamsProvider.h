@interface IESECLiveUserActParamsProvider : NSObject
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) IESECLiveRoomContext roomContext;
@property (nonatomic) <IESECLiveUserRecordActionInterface> actRecordManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveContext:;
- (void)setRoomContext:;
- (id)userActParamsProviderWithCount:;
- (id)actRecordManager;
- (id)clickProductIDArray;
- (id)curGuideProductID;
- (id)liveContext;
- (void)setActRecordManager:;
- (id)showProductIDArray;
- (void).cxx_destruct;
- (id)roomContext;
- (id)initWithRoomContext:;
@end
