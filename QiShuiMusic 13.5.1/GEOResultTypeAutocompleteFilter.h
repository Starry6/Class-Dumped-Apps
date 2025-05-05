@interface GEOResultTypeAutocompleteFilter : NSObject
@property (nonatomic) Q types;
- (id)init;
- (unsigned long long)types;
- (BOOL)applyToAutocompleteParameters:error:;
- (id)initWithResultTypes:;
@end
