@interface MTPAFBaseEventDataProvider : MTBaseEventDataProvider
@property (nonatomic) <MTPAFBaseEventDataProviderDelegate> delegate;
- (id)knownFields;
- (id)isOffline:;
- (id)osLanguages:;
@end
