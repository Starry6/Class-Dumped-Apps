@interface PKStrokeDelta : NSObject
@property (nonatomic) _PKStrokeConcrete deltaStroke;
@property (nonatomic) PKStrokePath deltaStrokeData;
@property (nonatomic) NSUUID _strokeUUID;
- (id)initWithData:error:;
- (void).cxx_destruct;
- (id)description;
- (id)dataRepresentation;
- (id)initWithArchive:error:;
- (void)saveToArchive:;
- (id)deltaStroke;
- (void)setDeltaStroke:;
- (id)deltaStrokeData;
- (void)setDeltaStrokeData:;
- (id)_strokeUUID;
- (void)set_strokeUUID:;
@end
