@interface IMTranscoderTelemetry : NSObject
- (id)init;
- (long long)_telemetryImageTypeForUTI:;
- (void)emitTranscodeBeginFromUTI:;
- (void)emitTranscodeEndFromUTI:;
- (void)emitPreviewGenerationBeginFromUTI:;
- (void)emitPreviewGenerationEndFromUTI:;
- (void)_emitSignpostPreviewGenerationRange:begin:;
- (void)_emitSignpostTranscodeRange:begin:;
- (void)emitSignpostNoTranscodeFromUTI:;
- (void)emitSignpostTranscodeStepForDestinationUTI:;
- (void)emitSignpostTranscodeFinalForDestinationUTI:;
- (void)emitSignpostTranscodeSkipSourceUTI:;
@end
