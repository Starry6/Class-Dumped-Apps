@interface LPCollaborationHandle : NSObject
@property (nonatomic) NSString handle;
@property (nonatomic) NSPersonNameComponents nameComponents;
- (id)nameComponents;
- (id)handle;
- (void)setHandle:;
- (void)setNameComponents:;
- (id)stringValue;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithHandle:nameComponents:;
@end
