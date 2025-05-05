@interface CHTextStrokeTransformationQuery : CHQuery
- (id)debugName;
- (id)strokePointTransformationsForContextStrokes:completionWithTelemetry:shouldCancel:;
- (id)strokePointTransformationsForContextStrokes:completion:shouldCancel:;
@end
