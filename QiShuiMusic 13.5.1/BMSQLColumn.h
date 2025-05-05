@interface BMSQLColumn : NSObject
@property (nonatomic) @? extractBlock;
@property (nonatomic) NSString name;
@property (nonatomic) q dataType;
@property (nonatomic) BOOL requestOnly;
- (id)init;
- (long long)dataType;
- (unsigned long long)hash;
- (BOOL)requestOnly;
- (void).cxx_destruct;
- (id)extractBlock;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithName:dataType:requestOnly:extractBlock:;
+ (id)new;
@end
