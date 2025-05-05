@interface LSSNSError : NSObject
+ (id)nodeProberErrorWithCode:description:;
+ (id)nodeProberErrorWithCode:originalError:;
+ (id)nodeProberErrorWithCode:userInfo:;
@end
