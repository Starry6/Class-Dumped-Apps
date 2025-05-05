@interface AWEIMGroupMemberCollectionCellContext : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString groupAlias;
@property (nonatomic) BOOL active;
- (id)initWithType:groupAlias:active:;
- (id)groupAlias;
- (BOOL)active;
- (long long)type;
- (void).cxx_destruct;
@end
