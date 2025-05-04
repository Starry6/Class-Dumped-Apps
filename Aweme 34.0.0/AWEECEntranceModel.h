@interface AWEECEntranceModel : NSObject
@property (nonatomic) NSDictionary oldEntranceInfo;
@property (nonatomic) NSMutableDictionary bcmInfo;
- (id)btd_stringValueForKey:;
- (void)btd_setObject:forKey:;
- (id)btd_objectForKey:default:;
- (id)btd_stringValueForKey:default:;
- (void)setBcmInfo:;
- (id)initWithEntranceInfo:bcmInfo:;
- (id)mergeResult;
- (id)bcmInfo;
- (void)setOldEntranceInfo:;
- (id)oldEntranceInfo;
- (void).cxx_destruct;
@end
