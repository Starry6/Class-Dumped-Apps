@interface PSIReusableObject : NSObject
@property (nonatomic) BOOL isPreparedFromStatement;
- (id)init;
- (void)prepareForReuse;
- (void)prepareFromStatement:;
- (void)didPrepareFromStatement:;
- (BOOL)isPreparedFromStatement;
@end
