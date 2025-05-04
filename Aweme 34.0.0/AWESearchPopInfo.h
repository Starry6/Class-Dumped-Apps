@interface AWESearchPopInfo : MTLModel
@property (nonatomic) NSString popName;
@property (nonatomic) NSString type;
@property (nonatomic) NSString reportUrl;
@property (nonatomic) NSNumber priority;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) NSDictionary commonLog;
@property (nonatomic) NSString channel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reportUrl;
- (id)popName;
- (void)setReportUrl:;
- (void)setCommonLog:;
- (void)setPopName:;
- (id)channel;
- (id)priority;
- (void)setChannel:;
- (id)type;
- (void)setType:;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)commonLog;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
