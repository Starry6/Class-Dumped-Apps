@interface MPCFWrapper : NSObject
@property (nonatomic) BOOL nullRef;
@property (nonatomic) r^v refValue;
- (void)dealloc;
- (id)description;
- (id)initWithCFType:;
- (id)refValue;
- (BOOL)isNullRef;
- (void)setNullRef:;
@end
