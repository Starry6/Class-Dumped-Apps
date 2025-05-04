@interface AWEShowMonetizeAnnieXCardConfig : NSObject
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSString bid;
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary schemaParams;
@property (nonatomic) Q videoType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} preferredFrame;
@property (nonatomic) NSDictionary initialData;
@property (nonatomic) @? trackParamsHandler;
- (id)initialData;
- (void)setInitialData:;
- (id)schemaParams;
- (id)bid;
- (void)setBid:;
- (void)setSchemaParams:;
- (void)setTrackParamsHandler:;
- (id)trackParamsHandler;
- (id)schema;
- (void)setSessionID:;
- (void)setSchema:;
- (unsigned long long)videoType;
- (id)sessionID;
- (void).cxx_destruct;
- (void)setVideoType:;
- (id)preferredFrame;
- (void)setPreferredFrame:;
@end
