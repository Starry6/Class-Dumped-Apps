@interface CNErrorFactory : NSObject
+ (id)errorForiOSABError:;
+ (id)errorWithCode:;
+ (id)_localizedReasonForCode:;
+ (id)errorByAddingUserInfoEntries:toError:;
+ (id)_localizedDescriptionForCode:;
+ (id)errorByPrependingKeyPath:toKeyPathsInError:;
+ (id)validationErrorByAggregatingValidationErrors:;
+ (long long)CNErrorCodeForABError:;
+ (id)errorObject:doesNotImplementSelector:;
+ (id)errorWithCode:userInfo:;
+ (id)os_log;
+ (id)genericiOSABError;
@end
