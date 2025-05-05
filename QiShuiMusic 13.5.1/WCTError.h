@interface WCTError : NSError
@property (nonatomic) NSInteger type;
- (id)infoForKey:;
- (id)initWithType:code:userInfo:;
- (id)initWithWCDBError:;
- (BOOL)isOK;
- (int)type;
- (id)description;
+ (id)errorWithWCDBError:;
@end
