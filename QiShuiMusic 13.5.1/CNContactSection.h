@interface CNContactSection : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) NSString sortKey;
- (id)sortKey;
- (void)setRange:;
- (id)identifier;
- (void)setTitle:;
- (id)range;
- (id)title;
- (void).cxx_destruct;
- (void)setSortKey:;
- (id)description;
- (void)setIdentifier:;
- (id)copyWithZone:;
@end
