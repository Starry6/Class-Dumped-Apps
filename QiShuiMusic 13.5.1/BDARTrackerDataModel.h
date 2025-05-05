@interface BDARTrackerDataModel : NSObject
@property (nonatomic) NSDictionary originalDict;
@property (nonatomic) NSString vid;
@property (nonatomic) NSString requestid;
@property (nonatomic) NSString timestamp;
@property (nonatomic) NSNumber adType;
@property (nonatomic) NSNumber isLynx;
- (void)BDARSetadType:;
- (void)BDARSetrequestid:;
- (void)BDARSettimestamp:;
- (id)vid;
- (void)BDARSetisLynx:;
- (void)BDARSetvid:;
- (BOOL)addPropertyFromDictionary:;
- (BOOL)addPropertyFromOtherModel:;
- (id)isLynx;
- (id)originalDict;
- (id)requestid;
- (void)setOriginalDict:;
- (id)init;
- (id)initWithDictionary:;
- (id)adType;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)copyWithZone:;
@end
