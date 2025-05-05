@interface MSSendMailIntent : INIntent
@property (nonatomic) NSString sender;
@property (nonatomic) NSArray to;
@property (nonatomic) NSArray cc;
@property (nonatomic) NSArray bcc;
@property (nonatomic) NSString subject;
@property (nonatomic) NSString body;
@property (nonatomic) NSArray attachments;
@property (nonatomic) NSNumber isDraft;
@property (nonatomic) NSString userTypedContent;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (id)description;
- (id)_privacySafeDescription;
@end
