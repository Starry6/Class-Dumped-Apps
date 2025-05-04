@interface AWEIMFansGroupEntryLimitCommonModel : NSObject
@property (nonatomic) NSString cid;
@property (nonatomic) BOOL immediatelyPushEntryLimitVC;
@property (nonatomic) NSDictionary selectedLimitDict;
@property (nonatomic) NSDictionary serverExtra;
@property (nonatomic) NSDictionary clientExtra;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)serverExtra;
- (void)setServerExtra:;
- (id)clientExtra;
- (void)setClientExtra:;
- (id)selectedLimitDict;
- (BOOL)immediatelyPushEntryLimitVC;
- (void)setImmediatelyPushEntryLimitVC:;
- (void)setSelectedLimitDict:;
- (id)cid;
- (id)init;
- (void).cxx_destruct;
- (void)setCid:;
@end
