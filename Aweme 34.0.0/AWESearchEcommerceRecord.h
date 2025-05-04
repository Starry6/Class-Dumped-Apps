@interface AWESearchEcommerceRecord : NSObject
@property (nonatomic) q count;
@property (nonatomic) q timestamp;
@property (nonatomic) NSString buttonType;
@property (nonatomic) NSString postion;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel model;
- (id)postion;
- (void)setPostion:;
- (id)pitayaItemData;
- (id)toDictionaryValue;
- (BOOL)isEqualRecord:;
- (id)buttonType;
- (long long)timestamp;
- (void)setModel:;
- (void)setCount:;
- (long long)count;
- (id)itemInfo;
- (void)setTimestamp:;
- (id)model;
- (void).cxx_destruct;
- (void)setButtonType:;
- (id)searchID;
+ (id)clickRecord:;
@end
