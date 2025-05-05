@interface FPErrorRedactionHelper : NSObject
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithError:depth:;
- (id)parseErrorIntoStringRedacted:;
@end
