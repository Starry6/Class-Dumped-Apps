@interface FAHTTPResponse : NSObject
@property (nonatomic) BOOL familyRefreshTriggered;
@property (nonatomic) NSHTTPURLResponse HTTPResponse;
@property (nonatomic) @ body;
- (id)body;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:body:;
- (id)initWithHTTPResponse:body:familyRefreshTriggered:;
- (id)HTTPResponse;
- (BOOL)familyRefreshTriggered;
- (void)setFamilyRefreshTriggered:;
@end
