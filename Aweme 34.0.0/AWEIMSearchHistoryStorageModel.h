@interface AWEIMSearchHistoryStorageModel : NSObject
@property (nonatomic) Q itemType;
@property (nonatomic) NSString itemID;
- (unsigned long long)itemType;
- (id)itemID;
- (void)setItemType:;
- (void)setItemID:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithCoder:;
@end
