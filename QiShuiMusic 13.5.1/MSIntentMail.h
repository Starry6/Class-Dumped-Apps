@interface MSIntentMail : INObject
@property (nonatomic) INPerson sender;
@property (nonatomic) NSArray to;
@property (nonatomic) NSArray cc;
@property (nonatomic) NSArray bcc;
@property (nonatomic) NSString subject;
@property (nonatomic) NSString body;
@property (nonatomic) NSDateComponents dateSent;
@end
