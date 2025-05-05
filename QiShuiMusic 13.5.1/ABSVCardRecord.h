@interface ABSVCardRecord : NSObject
@property (nonatomic) ^v record;
- (void)dealloc;
- (id)record;
- (id)initWithRecord:;
- (id)initWithVCardRepresentation:;
@end
