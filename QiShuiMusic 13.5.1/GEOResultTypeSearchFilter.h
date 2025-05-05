@interface GEOResultTypeSearchFilter : NSObject
@property (nonatomic) Q types;
- (id)init;
- (unsigned long long)types;
- (BOOL)applyToSearchParameters:error:;
- (id)initWithResultTypes:;
@end
