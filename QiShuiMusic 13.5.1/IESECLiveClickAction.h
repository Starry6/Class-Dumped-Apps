@interface IESECLiveClickAction : NSObject
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL showDisclaimer;
@property (nonatomic) @? willExecute;
@property (nonatomic) @? didExecute;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) IESECBTMModel btmModel;
- (void)setWillExecute:;
- (id)btmModel;
- (id)didExecute;
- (void)setBtmModel:;
- (void)setDidExecute:;
- (void)setExtraInfo:;
- (id)willExecute;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)extraInfo;
- (BOOL)showDisclaimer;
- (void)setShowDisclaimer:;
@end
