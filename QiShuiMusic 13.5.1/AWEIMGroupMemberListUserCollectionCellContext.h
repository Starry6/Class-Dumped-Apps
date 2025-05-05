@interface AWEIMGroupMemberListUserCollectionCellContext : NSObject
@property (nonatomic) NSString groupAlias;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL messageActive;
- (id)groupAlias;
- (id)initWithGroupAlias:active:messageActive:;
- (BOOL)messageActive;
- (BOOL)active;
- (void).cxx_destruct;
@end
