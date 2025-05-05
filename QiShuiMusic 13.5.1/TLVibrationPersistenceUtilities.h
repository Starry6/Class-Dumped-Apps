@interface TLVibrationPersistenceUtilities : NSObject
+ (BOOL)_validateObjectWithError:validationBlock:;
+ (BOOL)_objectIsValidUserGeneratedVibrationPattern:error:;
+ (BOOL)objectIsValidUserGeneratedVibrationPatternsDictionary:error:;
+ (id)userGeneratedVibrationStoreFileURL;
@end
