@interface AWESearchTrackManager : NSObject
@property (nonatomic) NSDictionary trackLoaclDict;
@property (nonatomic) NSDictionary logData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackShowEventWithModel:;
- (void)setLocalTrackDict:searchKeyword:referString:;
- (void)setLocalTrackDict:searchKeyword:;
- (void)trackShowEventWithModel:btm:host:;
- (void)trackClickEventWithModel:btm:host:;
- (void)trackClickEventWithModel:;
- (void)setTrackLoaclDict:;
- (id)trackLoaclDict;
- (id)logData;
- (void)setLogData:;
- (void).cxx_destruct;
@end
