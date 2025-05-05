@interface WBSHistoryTag : NSObject
@property (nonatomic) q databaseID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) double modificationTimestamp;
@property (nonatomic) q level;
- (long long)databaseID;
- (id)init;
- (long long)level;
- (id)identifier;
- (unsigned long long)hash;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (double)modificationTimestamp;
- (id)initWithTitle:identifier:databaseID:modificationTimestamp:level:;
@end
