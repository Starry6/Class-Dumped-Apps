@interface NSBasicObjectID : _NSCoreManagedObjectID
- (void)dealloc;
- (id)initWithObject:;
- (id)_retainedURIString;
- (id)_referenceData;
+ (char *)generatedNameSuffix;
@end
