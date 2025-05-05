@interface IESLiveInteractionLinkerServiceConfig : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) q mode;
@property (nonatomic) Q scene;
@property (nonatomic) Q fullLinkModule;
@property (nonatomic) BOOL customEnterBackground;
@property (nonatomic) @? toastBlock;
@property (nonatomic) @? shouldChangeKTVStreamLayout;
- (void)setShouldChangeKTVStreamLayout:;
- (BOOL)customEnterBackground;
- (unsigned long long)fullLinkModule;
- (void)setCustomEnterBackground:;
- (void)setFullLinkModule:;
- (void)setToastBlock:;
- (id)shouldChangeKTVStreamLayout;
- (id)toastBlock;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (long long)mode;
- (void)setMode:;
- (id)room;
- (void)setRoom:;
@end
