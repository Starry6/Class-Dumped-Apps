@interface IESLiveInteractionLinkerCreateParams : IESLiveInteractionLinkerParams
@property (nonatomic) BOOL joinChannelManually;
@property (nonatomic) BOOL autoSelectLayoutFromServer;
@property (nonatomic) IESLiveInteractionLayout layout;
@property (nonatomic) Q initSource;
@property (nonatomic) NSString source;
@property (nonatomic) NSDictionary createExtraParams;
- (BOOL)autoSelectLayoutFromServer;
- (id)createExtraParams;
- (unsigned long long)initSource;
- (BOOL)joinChannelManually;
- (void)setAutoSelectLayoutFromServer:;
- (void)setCreateExtraParams:;
- (void)setInitSource:;
- (void)setJoinChannelManually:;
- (void)setLayout:;
- (id)layout;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
@end
