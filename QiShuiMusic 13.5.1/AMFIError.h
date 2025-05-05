@interface AMFIError : NSError
- (id)initWithAMFIErrorCode:withURL:;
- (id)initWithMISError:withURL:;
@end
