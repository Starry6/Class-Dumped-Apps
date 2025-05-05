@interface MLModelErrorUtils : NSObject
+ (id)genericErrorWithFormat:;
+ (id)customLayerErrorWithUnderlyingError:withFormat:;
+ (id)errorWithCode:format:args:;
+ (id)programValidationAtLoadErrorWithReason:format:;
+ (id)featureTypeErrorWithFormat:;
+ (id)programParsingAtLoadErrorWithReason:format:;
+ (id)modelDecryptionErrorWithUnderlyingError:format:;
+ (id)privateErrorWithCode:underlyingError:format:args:;
+ (id)updateErrorWithFormat:;
+ (id)errorWithCode:underlyingError:format:;
+ (id)errorWithIntegerCode:underlyingError:format:args:;
+ (id)programEvaluationErrorWithUnderlyingError:format:;
+ (id)errorWithCode:format:;
+ (id)parameterErrorWithUnderlyingError:format:;
+ (id)modelDecryptionKeyFetchErrorWithUnderlyingError:format:;
+ (id)modelEncryptionErrorWithUnderlyingError:format:;
+ (id)IOErrorWithFormat:;
+ (id)errorWithCode:underlyingError:format:args:;
@end
