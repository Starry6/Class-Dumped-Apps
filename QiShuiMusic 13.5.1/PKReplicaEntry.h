@interface PKReplicaEntry : NSObject
@property (nonatomic) I replicaUUIDIndex;
@property (nonatomic) I clock;
@property (nonatomic) I subclock;
@property (nonatomic) BOOL inUse;
@property (nonatomic) PKDrawingConcrete drawing;
- (void)setClock:;
- (unsigned int)clock;
- (BOOL)inUse;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setInUse:;
- (id)description;
- (id)drawing;
- (unsigned int)replicaUUIDIndex;
- (void)setReplicaUUIDIndex:;
- (unsigned int)subclock;
- (void)setSubclock:;
- (void)setDrawing:;
- (id)initWithReplicaUUIDIndex:clock:subclock:inUse:forDrawing:;
@end
